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
	{ 0xe84c082, "nf_ct_tmpl_alloc" },
	{ 0xbec488c8, "nf_ct_seqadj_init" },
	{ 0x46ca6d68, "nf_ct_tmpl_free" },
	{ 0xc3c019d1, "ip_local_out" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x4d54ba2e, "inet_proto_csum_replace4" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x14fe1d8a, "ip_route_me_harder" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe7eee3d5, "__cookie_v4_init_sequence" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe8143a25, "nf_ipv6_ops" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xf900468d, "nf_ct_extend_unregister" },
	{ 0x22470ca1, "nf_ct_extend_register" },
	{ 0xdaf5c16e, "__cookie_v4_check" },
	{ 0x72298d2f, "ip6_local_out" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0xfb8c7be8, "xfrm_lookup" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x2bf17552, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F0330AE12B74F0B450069DD");
