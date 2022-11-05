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
	{ 0xeef9fbc5, "unregister_tcf_proto_ops" },
	{ 0x83564775, "register_tcf_proto_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa64b5938, "tcf_exts_change" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x775fcb7c, "tcf_exts_validate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x507945b0, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1c7c99f4, "tcf_exts_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x8ce84b5e, "tcf_exts_dump_stats" },
	{ 0xe6c36109, "tcf_exts_dump" },
	{ 0xd367601c, "nla_put" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xeb63b8ed, "tcf_action_exec" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DA23992CA04A8CE9971244F");
