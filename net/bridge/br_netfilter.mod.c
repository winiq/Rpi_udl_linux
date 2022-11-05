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
	{ 0x8cb305ff, "pskb_trim_rcsum_slow" },
	{ 0xab402357, "skb_ext_add" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x1af198dc, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x54113cf4, "dst_release" },
	{ 0xaed5719a, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x29c2dd65, "nf_hook_slow" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x105bcc70, "br_dev_queue_push_xmit" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0x8aae6324, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xe3bed6e4, "ip_route_input_noref" },
	{ 0xe8143a25, "nf_ipv6_ops" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x687648b4, "nf_br_ops" },
	{ 0xb81e522e, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7fa436af, "br_handle_frame_finish" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "651BA2D80C310CA9E8D386E");
