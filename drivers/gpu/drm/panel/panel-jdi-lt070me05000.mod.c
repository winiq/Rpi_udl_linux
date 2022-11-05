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
	{ 0x7945539c, "mipi_dsi_driver_register_full" },
	{ 0xf2483d51, "mipi_dsi_detach" },
	{ 0xfa700790, "mipi_dsi_dcs_set_display_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb59fff20, "mipi_dsi_generic_write" },
	{ 0x32db098c, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0xcdd6fba2, "mipi_dsi_dcs_write" },
	{ 0xbde81de2, "mipi_dsi_dcs_set_page_address" },
	{ 0xc4e13c55, "mipi_dsi_dcs_set_column_address" },
	{ 0xd6166a3f, "mipi_dsi_dcs_set_pixel_format" },
	{ 0x93d781b5, "mipi_dsi_dcs_soft_reset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x504111f8, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0x20e15454, "mipi_dsi_dcs_set_display_off" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa9ee3d0, "drm_panel_remove" },
	{ 0xe3c8217, "mipi_dsi_attach" },
	{ 0xc2ea4a2d, "drm_panel_add" },
	{ 0x4045b10f, "drm_panel_init" },
	{ 0x77f9973e, "devm_backlight_device_register" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xd919c6ea, "mipi_dsi_dcs_set_display_brightness" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1559df5b, "mipi_dsi_dcs_get_display_brightness" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6069016c, "drm_mode_duplicate" },
};

MODULE_INFO(depends, "drm,backlight");

MODULE_ALIAS("of:N*T*Cjdi,lt070me05000");
MODULE_ALIAS("of:N*T*Cjdi,lt070me05000C*");

MODULE_INFO(srcversion, "4B06AE29F00CFD15DAA0C71");
