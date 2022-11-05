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
	{ 0xbbf4dfbe, "phy_basic_t1_features" },
	{ 0xa67b364d, "genphy_handle_interrupt_no_ack" },
	{ 0x212e106a, "genphy_write_mmd_unsupported" },
	{ 0xde70e1c1, "genphy_read_mmd_unsupported" },
	{ 0x8f5f9de6, "phy_drivers_unregister" },
	{ 0x2f65bfd7, "phy_drivers_register" },
	{ 0xd662be42, "genphy_read_abilities" },
	{ 0x10cfcbfd, "genphy_read_status" },
	{ 0x577805e8, "genphy_update_link" },
	{ 0x6a92ab99, "phy_restore_page" },
	{ 0x9871508d, "__phy_modify" },
	{ 0x49bda11b, "phy_select_page" },
	{ 0xb12d6551, "phy_modify_paged" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe4cf2c78, "__genphy_config_aneg" },
	{ 0xf1be0a5f, "phy_modify_paged_changed" },
	{ 0x3aff67f9, "phy_read_paged" },
	{ 0x33605a58, "genphy_suspend" },
	{ 0x2a74e457, "genphy_resume" },
	{ 0xf0986695, "mdiobus_write" },
	{ 0xecfb301c, "__mdiobus_read" },
	{ 0xbf3b049b, "__mdiobus_write" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xbb2867b4, "phy_modify" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8d0fc958, "genphy_soft_reset" },
	{ 0xe142a26a, "phy_modify_changed" },
	{ 0xc23b3b9c, "phy_write_paged" },
	{ 0x3a2adbe9, "phy_error" },
	{ 0x553efb76, "phy_trigger_machine" },
	{ 0x1b77b1f3, "mdiobus_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "13120F15C8BF436EBF7FD12");
