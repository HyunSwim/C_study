%% Load Video
video_name = 'caltech_cordova1.avi';
video_read = VideoReader(video_name);
%% Read Frame
time_stamp = 5.29167;
video_read.CurrentTime = time_stamp;
frame = readFrame(video_read);
figure(1)
imshow(frame)
title('Origin')
%% Bird-eye Image
load birdsEyeConfig.mat
frame_bird = transformImage(birdsEyeConfig, frame);
figure(2)
imshow(frame_bird)
title('Bird-eye')
%% Gray-detection
approx_marker_width = 0.25;
frame_gray = rgb2gray(frame_bird);
figure(3)
imshow(frame_gray)
title('Gray Image')
%% Edge-detection
frame_edge = segmentLaneMarkerRidge(frame_gray, ...
    birdsEyeConfig, approx_marker_width);
figure(4)
imshow(frame_edge)
title('Edge-detection')