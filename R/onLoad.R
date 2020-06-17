.onAttach <- function(libname, pkg){
  packageStartupMessage(paste("Using V8 engine", version()))
}

.onLoad <- function(libname, pkgname){
  teardown_platform()
}
