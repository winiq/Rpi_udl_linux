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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0xa85c25c2, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x850247ef, "llc_sap_close" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xce164f05, "llc_build_and_send_ui_pkt" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "6334D70F091E169E2139805");
