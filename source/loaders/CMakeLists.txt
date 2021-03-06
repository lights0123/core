# Check if loaders are enabled
if(NOT OPTION_BUILD_LOADERS)
	return()
endif()

# Define loader modules
set(LOADER_MODULE_NAMES
	version
	preprocessor
	environment
	format
	log
	memory
	portability
	adt
	filesystem
	reflect
	dynlink
	serial
	configuration
	loader
	detour
)

# Plugins options
option(OPTION_BUILD_LOADERS_C "Build C Foreign Function Interface library loader plugin." OFF)
option(OPTION_BUILD_LOADERS_COB "Build GNU/COBOL 2.2 loader plugin." OFF)
option(OPTION_BUILD_LOADERS_CR "Build Crystal 0.33.0 loader plugin." OFF)
option(OPTION_BUILD_LOADERS_CS "Build C# CoreCLR 2.2.8 Runtime loader plugin." OFF)
option(OPTION_BUILD_LOADERS_DART "Build Dart VM 2.8.4 Runtime loader plugin." OFF)
option(OPTION_BUILD_LOADERS_FILE "Build File System loader plugin." OFF)
option(OPTION_BUILD_LOADERS_JSM "Build JavaScript SpiderMonkey 4.8 loader plugin." OFF)
option(OPTION_BUILD_LOADERS_JS "Build JavaScript V8 5.1+ loader plugin." OFF)
option(OPTION_BUILD_LOADERS_MOCK "Build mock loader loader plugin." ON)
option(OPTION_BUILD_LOADERS_NODE "Build NodeJS 10.22.0 JavaScript Runtime loader plugin." OFF)
option(OPTION_BUILD_LOADERS_PY "Build Python 3.7 C API loader plugin." OFF)
option(OPTION_BUILD_LOADERS_RB "Build Ruby 2.5 C API loader plugin." OFF)
option(OPTION_BUILD_LOADERS_RPC "Build cURL Remote Procedure Call loader plugin." OFF)
option(OPTION_BUILD_LOADERS_TS "Build TypeScript 3.9.7 Runtime loader plugin." OFF)
option(OPTION_BUILD_LOADERS_WASM "Build WebAssembly Virtual Machine loader plugin." OFF)

# Plugin packages
add_subdirectory(c_loader) # Foreign Function Interface library
add_subdirectory(cob_loader) # GNU/Cobol 2.2 Runtime
add_subdirectory(cr_loader) # Crystal 0.33.0 Runtime
add_subdirectory(dart_loader) # Dart VM 2.8.4 Runtime
add_subdirectory(cs_loader) # CoreCLR 2.2.8 Runtime
add_subdirectory(file_loader) # File System
add_subdirectory(jsm_loader) # Mozilla's SpiderMonkey 4.8 JavaScript Engine
add_subdirectory(js_loader) # Google's V8 5.1 JavaScript Engine
add_subdirectory(node_loader) # NodeJS 10.22.0 JavaScript Runtime
add_subdirectory(mock_loader) # Mock loader plugin without dependencies (core testing)
add_subdirectory(py_loader) # Python 3.7 C API
add_subdirectory(rb_loader) # Ruby 2.5 C API
add_subdirectory(rpc_loader) # cURL Remote Procedure Call
add_subdirectory(ts_loader) # TypeScript 3.9.7
add_subdirectory(wasm_loader) # WebAssembly Virtual Machine
