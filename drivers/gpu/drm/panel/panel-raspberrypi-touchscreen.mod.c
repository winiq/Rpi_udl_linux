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
	{ 0x5d2cb0d0, "mipi_dsi_driver_unregister" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x7945539c, "mipi_dsi_driver_register_full" },
	{ 0xc2ea4a2d, "drm_panel_add" },
	{ 0x4045b10f, "drm_panel_init" },
	{ 0x677b6788, "mipi_dsi_device_register_full" },
	{ 0x7f72d0f7, "of_graph_get_remote_port" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x70cecac2, "of_find_mipi_dsi_host_by_node" },
	{ 0xb96de63f, "of_graph_get_remote_port_parent" },
	{ 0xb21aa897, "of_graph_get_next_endpoint" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb59fff20, "mipi_dsi_generic_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xe3c8217, "mipi_dsi_attach" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0x35cbcb3, "mipi_dsi_device_unregister" },
	{ 0xa9ee3d0, "drm_panel_remove" },
	{ 0xf2483d51, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "0E480BB4C08BBAB317A4CFB");
