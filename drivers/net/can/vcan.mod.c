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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x4249472a, "sock_efree" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x56470118, "__warn_printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED5CA7CD3D534AA7353FEDC");
