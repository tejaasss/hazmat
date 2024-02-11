package org.tensorflow.lite.examples.detection;

import static android.Manifest.permission.CAMERA;

import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.Point;
import android.graphics.Rect;
import android.os.Bundle;
import android.provider.MediaStore;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import com.google.android.gms.tasks.OnFailureListener;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.android.gms.tasks.Task;
import com.google.mlkit.vision.common.InputImage;
import com.google.mlkit.vision.text.Text;
import com.google.mlkit.vision.text.TextRecognition;
import com.google.mlkit.vision.text.TextRecognizer;
import com.google.mlkit.vision.text.latin.TextRecognizerOptions;



public class ScannerActivity extends AppCompatActivity {
    static final int REQUEST_IMAGE_CAPTURE = 1;
    private ImageView img;
    private TextView textview;
    private Button snapBtn;
    private Button detectBtn;
    private Bitmap imageBitmap;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_scanner);
        img = (ImageView) findViewById(R.id.imageViewid);
        textview = (TextView) findViewById(R.id.textViewid);
        snapBtn = (Button) findViewById(R.id.snapid);
        detectBtn = (Button) findViewById(R.id.textresid);

        if (ContextCompat.checkSelfPermission(ScannerActivity.this, CAMERA) != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(ScannerActivity.this,new String[]{CAMERA},101);
        }

        detectBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                detectTxt();
                if(textview.getText().toString() != "Corrosive\n"
                        || textview.getText().toString() != "Dangerous\n"
                        || textview.getText().toString() != "Non-Flammable-gas\n"
                        || textview.getText().toString() != "Organic-Peroxide\n"
                        || textview.getText().toString() != "Oxygen\n"
                        || textview.getText().toString() != "Poison\n"
                        || textview.getText().toString() != "Radioactive\n"
                        || textview.getText().toString() != "Spontaneously-Combustible\n"
                        || textview.getText().toString() != "Explosive\n"
                        || textview.getText().toString() != "Flammable-Gas\n"
                        || textview.getText().toString() != "Flammable-Solid\n"
                        || textview.getText().toString() != "Infectious-Substance\n"
                        || textview.getText().toString() != "Inhalation-hazard"){
                    detectTextOne();
                }
                if(textview.getText().toString() != "Corrosive\n"
                        || textview.getText().toString() != "Dangerous\n"
                        || textview.getText().toString() != "Non-Flammable-gas\n"
                        || textview.getText().toString() != "Organic-Peroxide\n"
                        || textview.getText().toString() != "Oxygen\n"
                        || textview.getText().toString() != "Poison\n"
                        || textview.getText().toString() != "Radioactive\n"
                        || textview.getText().toString() != "Spontaneously-Combustible\n"
                        || textview.getText().toString()!= "Explosive\n"
                        || textview.getText().toString() != "Flammable-Gas\n"
                        || textview.getText().toString() != "Flammable-Solid\n"
                        || textview.getText().toString() != "Infectious-Substance\n"
                        || textview.getText().toString() != "Inhalation-hazard"){
                    detectTextTwo();
                }
                if(textview.getText().toString() != "Corrosive\n"
                        || textview.getText().toString() != "Dangerous\n"
                        || textview.getText().toString() != "Non-Flammable-gas\n"
                        || textview.getText().toString() != "Organic-Peroxide\n"
                        || textview.getText().toString() != "Oxygen\n"
                        || textview.getText().toString() != "Poison\n"
                        || textview.getText().toString() != "Radioactive\n"
                        || textview.getText().toString() != "Spontaneously-Combustible\n"
                        || textview.getText().toString() != "Explosive\n"
                        || textview.getText().toString() != "Flammable-Gas\n"
                        || textview.getText().toString() != "Flammable-Solid\n"
                        || textview.getText().toString() != "Infectious-Substance\n"
                        || textview.getText().toString() != "Inhalation-hazard"){
                    detectTextThree();
                }
                if(textview.getText().toString() != "Corrosive\n"
                        || textview.getText().toString() != "Dangerous\n"
                        || textview.getText().toString() != "Non-Flammable-gas\n"
                        || textview.getText().toString() != "Organic-Peroxide\n"
                        || textview.getText().toString() != "Oxygen\n"
                        || textview.getText().toString() != "Poison\n"
                        || textview.getText().toString() != "Radioactive\n"
                        || textview.getText().toString() != "Spontaneously-Combustible\n"
                        || textview.getText().toString() != "Explosive\n"
                        || textview.getText().toString() != "Flammable-Gas\n"
                        || textview.getText().toString() != "Flammable-Solid\n"
                        || textview.getText().toString() != "Infectious-Substance\n"
                        || textview.getText().toString() != "Inhalation-hazard"){
                    String s = new String("Couldn't detect text. Kindly capture the image again.");
                    textview.setText(s);
                }

            }
        });
        snapBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
               /*
                if (checkPermission()) {
                    dispatchTakePictureIntent();
                } else {
                    requestPermission();
                }
                */
                Intent intent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
                startActivityForResult(intent,101);
            }
        });
    }

    /*
    private boolean checkPermission() {
        int camera_permission = ContextCompat.checkSelfPermission(getApplicationContext(), CAMERA);
        return camera_permission == PackageManager.PERMISSION_GRANTED;
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String permissions[], int[] grantResults) {

        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (grantResults.length > 0) {
            boolean cameraaccepted = grantResults[0] == PackageManager.PERMISSION_GRANTED;
            if (cameraaccepted) {
                Toast.makeText(this, "Permission granted..", Toast.LENGTH_SHORT).show();
                dispatchTakePictureIntent();
            } else {
                Toast.makeText(this, "Permission Denined \n You cannot use app without providing permission", Toast.LENGTH_SHORT).show();
            }
        }
    }


    private void dispatchTakePictureIntent() {
        Intent takePictureIntent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        if (takePictureIntent.resolveActivity(getPackageManager()) != null) {
            startActivityForResult(takePictureIntent, REQUEST_IMAGE_CAPTURE);
        }
    }

    private void requestPermission() {
        int PERMISSION_REQUEST_CODE = 101;
        ActivityCompat.requestPermissions(this, new String[]{CAMERA}, PERMISSION_REQUEST_CODE);
    }



    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQUEST_IMAGE_CAPTURE && resultCode == RESULT_OK) {
            Bundle extras = data.getExtras();
            imageBitmap = (Bitmap) extras.get("data");
            img.setImageBitmap(imageBitmap);
        }
    }
    */

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == 101) {
            Bundle extras = data.getExtras();
            imageBitmap = (Bitmap) extras.get("data");
            img.setImageBitmap(imageBitmap);
        }
    }


    private void detectTxt() {
        InputImage image = InputImage.fromBitmap(imageBitmap, 0);
        TextRecognizer recognizer = TextRecognition.getClient(TextRecognizerOptions.DEFAULT_OPTIONS);
        Task<Text> result =
                recognizer.process(image)
                        .addOnSuccessListener(new OnSuccessListener<Text>() {
                            @Override
                            public void onSuccess(Text visionText) {
                                StringBuilder result = new StringBuilder();
                                for (Text.TextBlock block : visionText.getTextBlocks()) {
                                    String blockText = block.getText();
                                    Point[] blockCornerPoints = block.getCornerPoints();
                                    Rect blockFrame = block.getBoundingBox();
                                    for (Text.Line line : block.getLines()) {
                                        String lineText = line.getText();
                                        Point[] lineCornerPoints = line.getCornerPoints();
                                        Rect lineFrame = line.getBoundingBox();
                                        for (Text.Element element : line.getElements()) {
                                            String elementText = element.getText();
                                            Point[] elementCornerPoints = element.getCornerPoints();
                                            Rect elementFrame = element.getBoundingBox();
                                            result.append(elementText);
                                        }
                                        textview.setText(blockText);
                                    }
                                }
                            }
                        })
                        .addOnFailureListener(
                                new OnFailureListener() {
                                    @Override
                                    public void onFailure(@NonNull Exception e) {
                                        Toast.makeText(ScannerActivity.this, "Fail to extract data..", Toast.LENGTH_SHORT).show();
                                        Log.e("TAG", "FAIL TO GET DATA = " + e.getMessage().toString());
                                    }
                                });

    }



    private void detectTextOne(){
        InputImage image = InputImage.fromBitmap(imageBitmap, 90);
        TextRecognizer recognizer = TextRecognition.getClient(TextRecognizerOptions.DEFAULT_OPTIONS);
        Task<Text> result =
                recognizer.process(image)
                        .addOnSuccessListener(new OnSuccessListener<Text>() {
                            @Override
                            public void onSuccess(Text visionText) {
                                StringBuilder result = new StringBuilder();
                                for (Text.TextBlock block : visionText.getTextBlocks()) {
                                    String blockText = block.getText();
                                    Point[] blockCornerPoints = block.getCornerPoints();
                                    Rect blockFrame = block.getBoundingBox();
                                    for (Text.Line line : block.getLines()) {
                                        String lineText = line.getText();
                                        Point[] lineCornerPoints = line.getCornerPoints();
                                        Rect lineFrame = line.getBoundingBox();
                                        for (Text.Element element : line.getElements()) {
                                            String elementText = element.getText();
                                            Point[] elementCornerPoints = element.getCornerPoints();
                                            Rect elementFrame = element.getBoundingBox();
                                            result.append(elementText);
                                        }
                                        textview.setText(blockText);
                                    }
                                }
                            }
                        })
                        .addOnFailureListener(
                                new OnFailureListener() {
                                    @Override
                                    public void onFailure(@NonNull Exception e) {
                                        Toast.makeText(ScannerActivity.this, "Fail to extract data..", Toast.LENGTH_SHORT).show();
                                        Log.e("TAG", "FAIL TO GET DATA = " + e.getMessage().toString());
                                    }
                                });
    }

    private void detectTextTwo(){
        InputImage image = InputImage.fromBitmap(imageBitmap, 180);
        TextRecognizer recognizer = TextRecognition.getClient(TextRecognizerOptions.DEFAULT_OPTIONS);
        Task<Text> result =
                recognizer.process(image)
                        .addOnSuccessListener(new OnSuccessListener<Text>() {
                            @Override
                            public void onSuccess(Text visionText) {
                                StringBuilder result = new StringBuilder();
                                for (Text.TextBlock block : visionText.getTextBlocks()) {
                                    String blockText = block.getText();
                                    Point[] blockCornerPoints = block.getCornerPoints();
                                    Rect blockFrame = block.getBoundingBox();
                                    for (Text.Line line : block.getLines()) {
                                        String lineText = line.getText();
                                        Point[] lineCornerPoints = line.getCornerPoints();
                                        Rect lineFrame = line.getBoundingBox();
                                        for (Text.Element element : line.getElements()) {
                                            String elementText = element.getText();
                                            Point[] elementCornerPoints = element.getCornerPoints();
                                            Rect elementFrame = element.getBoundingBox();
                                            result.append(elementText);
                                        }
                                        textview.setText(blockText);
                                    }
                                }
                            }
                        })
                        .addOnFailureListener(
                                new OnFailureListener() {
                                    @Override
                                    public void onFailure(@NonNull Exception e) {
                                        Toast.makeText(ScannerActivity.this, "Fail to extract data..", Toast.LENGTH_SHORT).show();
                                        Log.e("TAG", "FAIL TO GET DATA = " + e.getMessage().toString());
                                    }
                                });
    }

    private void detectTextThree(){
        InputImage image = InputImage.fromBitmap(imageBitmap, 270);
        TextRecognizer recognizer = TextRecognition.getClient(TextRecognizerOptions.DEFAULT_OPTIONS);
        Task<Text> result =
                recognizer.process(image)
                        .addOnSuccessListener(new OnSuccessListener<Text>() {
                            @Override
                            public void onSuccess(Text visionText) {
                                StringBuilder result = new StringBuilder();
                                for (Text.TextBlock block : visionText.getTextBlocks()) {
                                    String blockText = block.getText();
                                    Point[] blockCornerPoints = block.getCornerPoints();
                                    Rect blockFrame = block.getBoundingBox();
                                    for (Text.Line line : block.getLines()) {
                                        String lineText = line.getText();
                                        Point[] lineCornerPoints = line.getCornerPoints();
                                        Rect lineFrame = line.getBoundingBox();
                                        for (Text.Element element : line.getElements()) {
                                            String elementText = element.getText();
                                            Point[] elementCornerPoints = element.getCornerPoints();
                                            Rect elementFrame = element.getBoundingBox();
                                            result.append(elementText);
                                        }
                                        textview.setText(blockText);
                                    }
                                }
                            }
                        })
                        .addOnFailureListener(
                                new OnFailureListener() {
                                    @Override
                                    public void onFailure(@NonNull Exception e) {
                                        Toast.makeText(ScannerActivity.this, "Fail to extract data..", Toast.LENGTH_SHORT).show();
                                        Log.e("TAG", "FAIL TO GET DATA = " + e.getMessage().toString());
                                    }
                                });
    }


}