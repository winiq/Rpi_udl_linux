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
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa470d75d, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x2ee7ee35, "nf_ct_kill_acct" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4d54ba2e, "inet_proto_csum_replace4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9ebdbd2e, "__skb_checksum" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb15b4109, "crc32c" },
	{ 0x507945b0, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4e0fed95, "inet_proto_csum_replace16" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe3c5d42c, "nf_ct_iterate_destroy" },
	{ 0x8d39172e, "nf_ip_checksum" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x72c4b0c, "skb_checksum" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7850a963, "inet_select_addr" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0x25bf24c4, "nf_hook_entries_delete_raw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x14fe1d8a, "ip_route_me_harder" },
	{ 0xaadc4190, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6587c97e, "module_put" },
	{ 0xe8143a25, "nf_ipv6_ops" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb7dfcbe9, "nf_ct_iterate_cleanup_net" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x92997ed8, "_printk" },
	{ 0x889c1b6d, "nf_conntrack_tuple_taken" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf900468d, "nf_ct_extend_unregister" },
	{ 0x1e008725, "nf_ct_helper_expectfn_register" },
	{ 0x22470ca1, "nf_ct_extend_register" },
	{ 0xd463189a, "__xfrm_decode_session" },
	{ 0x370637b5, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x71a9e0dd, "nf_ct_seqadj_set" },
	{ 0xfb8c7be8, "xfrm_lookup" },
	{ 0x64f6be8d, "nf_hook_entries_insert_raw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x692e4229, "nf_ip6_checksum" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x9158ff3f, "__do_once_done" },
	{ 0x2bf17552, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "3FDCF65F14ABF206391B1D5");
