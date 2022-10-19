#vim /home/bwang/.local/lib/python3.7/site-packages/scalene.egg-link：/home/bwang/scalene
rm -rf ./build/temp.linux-x86_64-cpython-37/scalene/libscalene.so
rm -rf ./build/lib.linux-x86_64-cpython-37/scalene/libscalene.so
rm -rf ./scalene/libscalene.so
python setup.py develop --editable -b build --prefix /home/bwang/.local/ --no-deps
