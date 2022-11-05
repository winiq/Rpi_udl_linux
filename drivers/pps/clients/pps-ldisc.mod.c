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
	{ 0x16383ff2, "tty_unregister_ldisc" },
	{ 0x7303ce54, "tty_register_ldisc" },
	{ 0xc4a32b55, "n_tty_inherit_ops" },
	{ 0xb9f24b2e, "pps_event" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4cb27100, "ktime_get_snapshot" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x484d38c, "pps_register_source" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3f8885d0, "pps_unregister_source" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x36563b93, "pps_lookup_dev" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A003259A9943374857B5865");
