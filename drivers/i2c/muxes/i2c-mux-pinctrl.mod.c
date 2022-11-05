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
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xaffb9cd2, "i2c_mux_add_adapter" },
	{ 0xcb88eadc, "i2c_root_adapter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe2467dc, "pinctrl_lookup_state" },
	{ 0xc8809858, "devm_pinctrl_get" },
	{ 0x7f57c791, "i2c_mux_alloc" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x7628a698, "of_find_i2c_adapter_by_node" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xed2e8dd8, "of_property_read_string_helper" },
	{ 0xed1d41b0, "pinctrl_select_state" },
	{ 0xcce69d19, "i2c_put_adapter" },
	{ 0xc0736ccc, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrl");
MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrlC*");

MODULE_INFO(srcversion, "43EFAACBE84B0EDD634202A");
