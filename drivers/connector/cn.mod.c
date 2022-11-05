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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x337be4b0, "netlink_has_listeners" },
	{ 0x8b45f45a, "proc_create_single_data" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x4b24c57c, "netlink_kernel_release" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x82baa22e, "init_net" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xeea50d0c, "netlink_broadcast" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6c1b521f, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FFD618076D2330B13DEAAB0");
