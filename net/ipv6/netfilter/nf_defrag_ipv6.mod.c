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
	{ 0x78526bc3, "inet_frag_kill" },
	{ 0x8cb305ff, "pskb_trim_rcsum_slow" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x4a894ef5, "fqdir_exit" },
	{ 0x5ef66728, "inet_frag_find" },
	{ 0xbf000673, "inet_frag_reasm_prepare" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xabba3d11, "__icmpv6_send" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xd76c6a94, "inet_frags_fini" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x82baa22e, "init_net" },
	{ 0x1575d278, "fqdir_init" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0xbe1f76d, "inet_frag_reasm_finish" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5448d0d8, "inet_frag_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe956bda0, "inet_frag_pull_head" },
	{ 0xde356f7c, "inet_frags_init" },
	{ 0x58d5889a, "inet_frag_queue_insert" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3227E26834FA25B93AD2A58");
