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
	{ 0x5a21e796, "tcf_unregister_action" },
	{ 0x3ef33e6, "tcf_register_action" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xd367601c, "nla_put" },
	{ 0x6d99995e, "skb_store_bits" },
	{ 0x92997ed8, "_printk" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c2f6ee8, "tcf_idr_cleanup" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x9cd15d2e, "tcf_idr_release" },
	{ 0x35e1a722, "tcf_idr_create" },
	{ 0x5651c607, "tcf_chain_put_by_act" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x195d3ae9, "tcf_action_set_ctrlact" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa1a0d8b5, "tcf_action_check_ctrlact" },
	{ 0x36854bb, "tcf_idr_check_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8ea51c3e, "tcf_idr_search" },
	{ 0x11bc5e40, "tcf_generic_walker" },
	{ 0xec3e288c, "tcf_action_update_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcd2792c0, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD351A483703FA511C8BF85");