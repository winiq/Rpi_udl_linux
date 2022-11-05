#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xaffb9cd2, "i2c_mux_add_adapter" },
	{ 0xe1a35f0c, "mux_control_states" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x7f57c791, "i2c_mux_alloc" },
	{ 0x83eb276e, "of_get_next_child" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x7628a698, "of_find_i2c_adapter_by_node" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x1cec6d24, "devm_mux_control_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc6ab0d33, "mux_control_select" },
	{ 0x93c978ed, "mux_control_deselect" },
	{ 0xcce69d19, "i2c_put_adapter" },
	{ 0xc0736ccc, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "i2c-mux,mux-core");

MODULE_ALIAS("of:N*T*Ci2c-mux");
MODULE_ALIAS("of:N*T*Ci2c-muxC*");

MODULE_INFO(srcversion, "905F9D7E9050EAB93F5DF67");
