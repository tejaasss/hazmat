package org.tensorflow.lite.examples.detection;

import android.graphics.Rect;
import android.os.Bundle;
import android.util.Log;
import android.view.SurfaceView;
import android.view.WindowManager;

import androidx.appcompat.app.AppCompatActivity;

import org.opencv.android.BaseLoaderCallback;
import org.opencv.android.CameraBridgeViewBase;
import org.opencv.android.JavaCameraView;
import org.opencv.android.LoaderCallbackInterface;
import org.opencv.android.OpenCVLoader;
import org.opencv.core.CvType;
import org.opencv.core.KeyPoint;
import org.opencv.core.Mat;
import org.opencv.core.MatOfKeyPoint;
import org.opencv.core.MatOfPoint;
import org.opencv.core.Scalar;
import org.opencv.features2d.MSER;
import org.opencv.imgproc.Imgproc;

import java.util.ArrayList;
import java.util.List;

public class TextDetection extends AppCompatActivity implements CameraBridgeViewBase.CvCameraViewListener2{
    private Mat mGrey, mRgba, CONTOUR_COLOR;
        private JavaCameraView mOpenCvCameraView;
        private BaseLoaderCallback mLoaderCallback = new BaseLoaderCallback(this) {
            @Override
            public void onManagerConnected(int status) {
                switch (status) {
                    case LoaderCallbackInterface.SUCCESS: {
                        mOpenCvCameraView.setCameraPermissionGranted();
                        mOpenCvCameraView.enableView();
                    }
                    break;
                    default: {
                        super.onManagerConnected(status);
                    }
                    break;
                }
            }
        };
        @Override
        public void onCreate(Bundle savedInstanceState) {
            super.onCreate(savedInstanceState);

            //FULLSCREEN MODE
            getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,      WindowManager.LayoutParams.FLAG_FULLSCREEN);
            getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
            setContentView(R.layout.main_layout);

            mOpenCvCameraView = (JavaCameraView) findViewById(R.id.my_java_camera);
            mOpenCvCameraView.setVisibility(SurfaceView.VISIBLE);
            mOpenCvCameraView.setCvCameraViewListener(this);

        }

        public Mat onCameraFrame(CameraBridgeViewBase.CvCameraViewFrame inputFrame) {
            mGrey = inputFrame.gray();
            mRgba = inputFrame.rgba();

            detectText();
            return mRgba;
        }
        @Override
        public void onPause() {
            super.onPause();
            if (mOpenCvCameraView != null)
                mOpenCvCameraView.disableView();
        }

        @Override
        public void onResume() {
            super.onResume();
            if (!OpenCVLoader.initDebug()) {
                OpenCVLoader.initAsync(OpenCVLoader.OPENCV_VERSION_3_1_0, this, mLoaderCallback);
            } else {
                mLoaderCallback.onManagerConnected(LoaderCallbackInterface.SUCCESS);
            }
        }

        public void onDestroy() {
            super.onDestroy();
            if (mOpenCvCameraView != null)
                mOpenCvCameraView.disableView();
        }

        public void onCameraViewStarted(int width, int height) {
            Mat mIntermediateMat = new Mat();
            mGrey = new Mat(height, width, CvType.CV_8UC4);
            mRgba = new Mat(height, width, CvType.CV_8UC4);
        }

    @Override
    public void onCameraViewStopped() {

    }

    private void detectText() {
            MatOfKeyPoint keypoint = new MatOfKeyPoint();
            List<KeyPoint> listpoint;
            KeyPoint kpoint;
            Mat mask = Mat.zeros(mGrey.size(), CvType.CV_8UC1);
            int rectanx1;
            int rectany1;
            int rectanx2;
            int rectany2;
            int imgsize = mGrey.height() * mGrey.width();
            Scalar zeos = new Scalar(0, 0, 0);

            List<MatOfPoint> contour2 = new ArrayList<MatOfPoint>();
            Mat kernel = new Mat(1, 50, CvType.CV_8UC1, Scalar.all(255));
            Mat morbyte = new Mat();
            Mat hierarchy = new Mat();

            org.opencv.core.Rect rectan3;
            //
            MSER detector = MSER.create();
            detector.detect(mGrey, keypoint);
            listpoint = keypoint.toList();
            //

        for (int ind = 0; ind < listpoint.size(); ind++) {
                kpoint = listpoint.get(ind);
                rectanx1 = (int) (kpoint.pt.x - 0.5 * kpoint.size);
                rectany1 = (int) (kpoint.pt.y - 0.5 * kpoint.size);
                rectanx2 = (int) (kpoint.size);
                rectany2 = (int) (kpoint.size);
                if (rectanx1 <= 0)
                    rectanx1 = 1;
                if (rectany1 <= 0)
                    rectany1 = 1;
                if ((rectanx1 + rectanx2) > mGrey.width())
                    rectanx2 = mGrey.width() - rectanx1;
                if ((rectany1 + rectany2) > mGrey.height())
                    rectany2 = mGrey.height() - rectany1;
                Rect rectant = new Rect(rectanx1, rectany1, rectanx2, rectany2);
                try {
                    Mat roi = new Mat(mask, rectant);
                    roi.setTo(CONTOUR_COLOR);
                    Log.d("textdetectionbestie", "working ");
                } catch (Exception ex) {
                    Log.d("textdectectionbestie", "mat roi error " + ex.getMessage());
                }
            }

            Imgproc.morphologyEx(mask, morbyte, Imgproc.MORPH_DILATE, kernel);
            Imgproc.findContours(morbyte, contour2, hierarchy,
                    Imgproc.RETR_EXTERNAL, Imgproc.CHAIN_APPROX_NONE);
            for (int ind = 0; ind < contour2.size(); ind++) {
                rectan3 = Imgproc.boundingRect(contour2.get(ind));
                rectan3 = Imgproc.boundingRect(contour2.get(ind));
                if (rectan3.area() > 0.5 * imgsize || rectan3.area() < 100
                        || rectan3.width / rectan3.height < 2) {
                    Mat roi = new Mat(morbyte, rectan3);
                    roi.setTo(zeos);

                } else
                    Imgproc.rectangle(mRgba, rectan3.br(), rectan3.tl(),
                            CONTOUR_COLOR);
            }
        }

    }

