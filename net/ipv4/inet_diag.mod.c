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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd17ad3ea, "sock_diag_put_meminfo" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xfc51aef, "sock_diag_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x34df43d0, "sock_diag_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd367601c, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa793ef4e, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x41dedaf5, "sock_diag_unregister_inet_compat" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xc14cab61, "inet6_lookup" },
	{ 0x3fd79554, "sock_gen_put" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xcdf7e1b1, "sock_diag_check_cookie" },
	{ 0x98c37d6d, "sock_diag_save_cookie" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0xd408ef16, "__inet_lookup_listener" },
	{ 0x85e14602, "sock_diag_register_inet_compat" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xfb61c2fe, "bpf_sk_storage_diag_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0xef4feda1, "sock_i_uid" },
	{ 0xcbdda75c, "__netlink_dump_start" },
	{ 0x11e2af69, "netlink_net_capable" },
	{ 0x1cab01f6, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B3521FF2F7353B5C91894F");
