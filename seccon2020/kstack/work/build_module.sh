cp ./src/kstack.* ./build
cd ./build
make
cd ../
cp ./build/kstack.ko ~/buildroot-2020.02.5/output/build/linux-4.19.91/
