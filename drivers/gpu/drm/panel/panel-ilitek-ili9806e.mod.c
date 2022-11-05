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
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xc2ea4a2d, "drm_panel_add" },
	{ 0x1bd4b125, "drm_panel_of_backlight" },
	{ 0xf9a482f9, "msleep" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x4045b10f, "drm_panel_init" },
	{ 0x818880ec, "of_match_node" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0xa9ee3d0, "drm_panel_remove" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:txw397017s2");
MODULE_ALIAS("spi:ili9806e");
MODULE_ALIAS("spi:hyperpixel4");
MODULE_ALIAS("of:N*T*Ctxw,txw397017s2");
MODULE_ALIAS("of:N*T*Ctxw,txw397017s2C*");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel4");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel4C*");
MODULE_ALIAS("of:N*T*Cilitek,ili9806e");
MODULE_ALIAS("of:N*T*Cilitek,ili9806eC*");

MODULE_INFO(srcversion, "047EFD32B23FD3F31F26E58");
