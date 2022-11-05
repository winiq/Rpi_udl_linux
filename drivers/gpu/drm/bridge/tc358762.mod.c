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
	{ 0x73053428, "dev_err_probe" },
	{ 0xe3c8217, "mipi_dsi_attach" },
	{ 0xaafca3e9, "drm_bridge_add" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x79d4df93, "devm_drm_panel_bridge_add" },
	{ 0x8c6ca37b, "drm_of_find_panel_or_bridge" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb59fff20, "mipi_dsi_generic_write" },
	{ 0x6cfc0669, "drm_bridge_attach" },
	{ 0x29d46e06, "drm_bridge_remove" },
	{ 0xf2483d51, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358762");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358762C*");

MODULE_INFO(srcversion, "CF01327AEA3FDAA09AA3DA1");
