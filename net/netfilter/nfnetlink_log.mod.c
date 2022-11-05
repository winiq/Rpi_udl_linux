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
	{ 0x88f2e332, "nf_log_unregister" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xb0443cda, "nfnetlink_subsys_unregister" },
	{ 0x9ba1c3f8, "nf_log_register" },
	{ 0x9a1c71a8, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xe22d1723, "skb_put" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xaab7d71, "from_kgid_munged" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xd367601c, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xdd237372, "nf_log_bind_pf" },
	{ 0x4f30098, "nf_log_unbind_pf" },
	{ 0x88c3ca3, "nfnl_ct_hook" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6587c97e, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x507945b0, "__put_net" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x7010b9ba, "proc_set_user" },
	{ 0x95775e45, "make_kgid" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0x73e21d74, "nf_log_unset" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xd0a04e39, "nfnetlink_unicast" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "AB1240BEB0EC260548783AC");
