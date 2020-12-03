
clc; clear;
files = dir(strcat('*.fis'));
for file = files'
    filenames  = split(file.name, '.');
    eval([char(filenames(1)) '= readfis(file.name)'])
end
clear filenames file files;