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
	{ 0xadcac529, "driver_unregister" },
	{ 0x7945539c, "mipi_dsi_driver_register_full" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x62e9350e, "spi_setup" },
	{ 0xe3c8217, "mipi_dsi_attach" },
	{ 0xc2ea4a2d, "drm_panel_add" },
	{ 0x1bd4b125, "drm_panel_of_backlight" },
	{ 0x4045b10f, "drm_panel_init" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0xa9ee3d0, "drm_panel_remove" },
	{ 0xf2483d51, "mipi_dsi_detach" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x90ba73c2, "mipi_dsi_dcs_write_buffer" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:txw210001b0");
MODULE_ALIAS("spi:hyperpixel2round");
MODULE_ALIAS("of:N*T*Ctxw,txw210001b0");
MODULE_ALIAS("of:N*T*Ctxw,txw210001b0C*");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel2round");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel2roundC*");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550b");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550bC*");

MODULE_INFO(srcversion, "33D8B7847A7000D090E4028");
