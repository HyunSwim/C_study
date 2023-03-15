## *********************************************************
##
## File autogenerated for the global_planner package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 246, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 291, 'description': 'Lethal Cost', 'max': 255, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'lethal_cost', 'edit_method': '', 'default': 253, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 291, 'description': 'Neutral Cost', 'max': 255, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'neutral_cost', 'edit_method': '', 'default': 50, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 291, 'description': 'Factor to multiply each cost from costmap by', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'cost_factor', 'edit_method': '', 'default': 3.0, 'level': 0, 'min': 0.01, 'type': 'double'}, {'srcline': 291, 'description': 'Publish Potential Costmap', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'publish_potential', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 291, 'description': 'How to set the orientation of each point', 'max': 6, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'orientation_mode', 'edit_method': "{'enum_description': 'How to set the orientation of each point', 'enum': [{'srcline': 14, 'description': 'No orientations added except goal orientation', 'srcfile': '/home/wecar/wecar_ws/src/navigation/global_planner/cfg/GlobalPlanner.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'None'}, {'srcline': 16, 'description': 'Positive x axis points along path, except for the goal orientation', 'srcfile': '/home/wecar/wecar_ws/src/navigation/global_planner/cfg/GlobalPlanner.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Forward'}, {'srcline': 17, 'description': 'Orientations are a linear blend of start and goal pose', 'srcfile': '/home/wecar/wecar_ws/src/navigation/global_planner/cfg/GlobalPlanner.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Interpolate'}, {'srcline': 19, 'description': 'Forward orientation until last straightaway, then a linear blend until the goal pose', 'srcfile': '/home/wecar/wecar_ws/src/navigation/global_planner/cfg/GlobalPlanner.cfg', 'cconsttype': 'const int', 'value': 3, 'ctype': 'int', 'type': 'int', 'name': 'ForwardThenInterpolate'}, {'srcline': 21, 'description': 'Negative x axis points along the path, except for the goal orientation', 'srcfile': '/home/wecar/wecar_ws/src/navigation/global_planner/cfg/GlobalPlanner.cfg', 'cconsttype': 'const int', 'value': 4, 'ctype': 'int', 'type': 'int', 'name': 'Backward'}, {'srcline': 23, 'description': 'Positive y axis points along the path, except for the goal orientation', 'srcfile': '/home/wecar/wecar_ws/src/navigation/global_planner/cfg/GlobalPlanner.cfg', 'cconsttype': 'const int', 'value': 5, 'ctype': 'int', 'type': 'int', 'name': 'Leftward'}, {'srcline': 25, 'description': 'Negative y axis points along the path, except for the goal orientation', 'srcfile': '/home/wecar/wecar_ws/src/navigation/global_planner/cfg/GlobalPlanner.cfg', 'cconsttype': 'const int', 'value': 6, 'ctype': 'int', 'type': 'int', 'name': 'Rightward'}]}", 'default': 1, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 291, 'description': 'What window to use to determine the orientation based on the position derivative specified by the orientation mode', 'max': 255, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'orientation_window_size', 'edit_method': '', 'default': 1, 'level': 0, 'min': 1, 'type': 'int'}], 'type': '', 'id': 0}

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

GlobalPlanner_None = 0
GlobalPlanner_Forward = 1
GlobalPlanner_Interpolate = 2
GlobalPlanner_ForwardThenInterpolate = 3
GlobalPlanner_Backward = 4
GlobalPlanner_Leftward = 5
GlobalPlanner_Rightward = 6
