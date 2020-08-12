# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
input_size { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
input_number { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
filter_number { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 32
	offset_end 39
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


