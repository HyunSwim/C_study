## *********************************************************
##
## File autogenerated for the zed_nodelets package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 246, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [{'upper': 'GENERAL', 'lower': 'general', 'srcline': 124, 'name': 'general', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT::GENERAL', 'field': 'DEFAULT::general', 'state': True, 'parentclass': 'DEFAULT', 'groups': [], 'parameters': [{'srcline': 9, 'description': 'Video and Depth data frequency', 'max': 60.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'pub_frame_rate', 'edit_method': '', 'default': 15.0, 'level': 0, 'min': 0.1, 'type': 'double'}], 'type': '', 'id': 1}, {'upper': 'DEPTH', 'lower': 'depth', 'srcline': 124, 'name': 'depth', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT::DEPTH', 'field': 'DEFAULT::depth', 'state': True, 'parentclass': 'DEFAULT', 'groups': [], 'parameters': [{'srcline': 12, 'description': 'Depth confidence threshold', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'depth_confidence', 'edit_method': '', 'default': 50, 'level': 1, 'min': 1, 'type': 'int'}, {'srcline': 13, 'description': 'Texture confidence threshold', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'depth_texture_conf', 'edit_method': '', 'default': 100, 'level': 2, 'min': 1, 'type': 'int'}, {'srcline': 14, 'description': 'Point cloud frequency', 'max': 60.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'point_cloud_freq', 'edit_method': '', 'default': 15.0, 'level': 3, 'min': 0.1, 'type': 'double'}], 'type': '', 'id': 2}, {'upper': 'VIDEO', 'lower': 'video', 'srcline': 124, 'name': 'video', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT::VIDEO', 'field': 'DEFAULT::video', 'state': True, 'parentclass': 'DEFAULT', 'groups': [], 'parameters': [{'srcline': 17, 'description': 'Defines the brightness control', 'max': 8, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'brightness', 'edit_method': '', 'default': 4, 'level': 4, 'min': 0, 'type': 'int'}, {'srcline': 18, 'description': 'Defines the contrast control', 'max': 8, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'contrast', 'edit_method': '', 'default': 4, 'level': 5, 'min': 0, 'type': 'int'}, {'srcline': 19, 'description': 'Defines the hue control', 'max': 11, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'hue', 'edit_method': '', 'default': 0, 'level': 6, 'min': 0, 'type': 'int'}, {'srcline': 20, 'description': 'Defines the saturation control', 'max': 8, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'saturation', 'edit_method': '', 'default': 4, 'level': 7, 'min': 0, 'type': 'int'}, {'srcline': 21, 'description': 'Defines the digital sharpness control', 'max': 8, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'sharpness', 'edit_method': '', 'default': 4, 'level': 8, 'min': 0, 'type': 'int'}, {'srcline': 22, 'description': 'Defines the gamma control', 'max': 9, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'gamma', 'edit_method': '', 'default': 8, 'level': 9, 'min': 1, 'type': 'int'}, {'srcline': 23, 'description': 'Defines if the Gain and Exposure are in automatic mode or not', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'auto_exposure_gain', 'edit_method': '', 'default': True, 'level': 10, 'min': False, 'type': 'bool'}, {'srcline': 24, 'description': 'Defines the gain control', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'gain', 'edit_method': '', 'default': 100, 'level': 11, 'min': 0, 'type': 'int'}, {'srcline': 25, 'description': 'Defines the exposure control', 'max': 100, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'exposure', 'edit_method': '', 'default': 100, 'level': 12, 'min': 0, 'type': 'int'}, {'srcline': 26, 'description': 'Defines if the White balance is in automatic mode or not', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'auto_whitebalance', 'edit_method': '', 'default': True, 'level': 13, 'min': False, 'type': 'bool'}, {'srcline': 27, 'description': 'Defines the color temperature value (x100)', 'max': 65, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/wecar/wecar_ws/src/zed-ros-wrapper/zed_nodelets/cfg/Zed.cfg', 'name': 'whitebalance_temperature', 'edit_method': '', 'default': 42, 'level': 14, 'min': 28, 'type': 'int'}], 'type': '', 'id': 3}], 'parameters': [], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

