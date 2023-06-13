// Use all the autocxx types which might be handy.
use autocxx::prelude::*;

include_cpp! {
    #include "foo.h"
    safety!(unsafe_ffi)
    generate!("wrappedMethod") // allowlist a function
}

fn main() {
    ffi::wrappedMethod(0);
}