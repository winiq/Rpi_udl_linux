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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x32db098c, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0x8f5a2d12, "mipi_dsi_dcs_set_tear_on" },
	{ 0x90ba73c2, "mipi_dsi_dcs_write_buffer" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe3c8217, "mipi_dsi_attach" },
	{ 0xc2ea4a2d, "drm_panel_add" },
	{ 0x1bd4b125, "drm_panel_of_backlight" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x4045b10f, "drm_panel_init" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xfa700790, "mipi_dsi_dcs_set_display_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x20e15454, "mipi_dsi_dcs_set_display_off" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x504111f8, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0xa9ee3d0, "drm_panel_remove" },
	{ 0xf2483d51, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41");
MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41C*");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02C*");
MODULE_ALIAS("of:N*T*Cnwe,nwe080");
MODULE_ALIAS("of:N*T*Cnwe,nwe080C*");

MODULE_INFO(srcversion, "53A1ED17B571565031EEA0B");
