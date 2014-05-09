#!/bin/sh

###### defines ######

local_dir=$PWD
defconfig=cyanogenmod_i9082_defconfig
jobs=4

###### defines ######
echo '#############'
echo 'making clean'
echo '#############'
make clean                                                                 # clean the sources
rm -rf out                                                                 # clean the output folder
echo '#############'
echo 'making defconfig'
echo '#############'
make $defconfig
echo '#############'
echo 'making zImage'
echo '#############'
time make -j$jobs
echo '#############'
echo 'copying files to ./out'
echo '#############'
echo ''
mkdir -p out/modules                                                       # make dirs for zImage and modules
cp arch/arm/boot/zImage out/zImage                                         # copy zImage
# Find and copy modules
find -name '*.ko' | xargs -I {} cp {} ./out/modules/
echo 'done'
cd $local_dir                                                              # cd back to the old dir
echo ''
echo '#############'
echo 'build finished successfully'
echo '#############'
