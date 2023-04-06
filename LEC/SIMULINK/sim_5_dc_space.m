clear; clc;
open_system('sim_5_dc_refer.slx');

model_works = get_param('sim_5_dc_refer', 'ModelWorkspace');
model_works.DatasSource = 'MAT-File';
model_works.FileName = 'dc_params';

assignin(model_works, 'R', 2);
assignin(model_works, 'L', 0.5);
assignin(model_works, 'b', 0.2);
assignin(model_works, 'J', 0.02);
assignin(model_works, 'K_e', 0.1);
assignin(model_works, 'K_t', 0.1);

model_works.saveToSource;
model_works.reload;