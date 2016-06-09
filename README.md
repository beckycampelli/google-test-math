### Hey there!
Glad you stopped by! In addition to the Bank Test example on our Wiki, here is another Google Test example that demonstrates a way to use the test fixture (TEST_F) option when writing tests.

Even though the SetUp and TearDown functions are not used in this case to combat repetition, it still shows that using the test fixture does not change the running of the tests: it may simply be used to establish a test class.

### google-test-math


To run this google test math example, use these commands:
```sh
cmake CMakeLists.txt
make
./runTests
```
