# *************
# *** Files ***
# *************

enkit_input_sources = files(
	'file_in.c'
)

enkit_output_sources = files(
	'file_out.c'
)

# *****************
# *** Libraries ***
# *****************

libenkit_in = static_library(
	'enkit_in',
	enkit_input_sources,
	include_directories: enkit_directories
)

libenkit_out = static_library(
	'enkit_out',
	enkit_output_sources,
	include_directories: enkit_directories
)