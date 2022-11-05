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
	{ 0x2a74e457, "genphy_resume" },
	{ 0x33605a58, "genphy_suspend" },
	{ 0x8f5f9de6, "phy_drivers_unregister" },
	{ 0x2f65bfd7, "phy_drivers_register" },
	{ 0xb01fa969, "phy_resolve_aneg_linkmode" },
	{ 0xc19097f5, "genphy_read_lpa" },
	{ 0x1b77b1f3, "mdiobus_read" },
	{ 0x577805e8, "genphy_update_link" },
	{ 0x86476470, "phy_start_aneg" },
	{ 0xf7d65317, "phy_init_hw" },
	{ 0x8d0fc958, "genphy_soft_reset" },
	{ 0xf0986695, "mdiobus_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:00000000001110110001100001100001");
MODULE_ALIAS("mdio:00000000001110110001100010000001");
MODULE_ALIAS("mdio:0000000000111011000110000100????");

MODULE_INFO(srcversion, "9C5FBC9EFAE0F3C543A5C0D");
