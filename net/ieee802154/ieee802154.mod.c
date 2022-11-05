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
	{ 0xdd0d3a1f, "class_find_device" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3b473c76, "get_net_ns_by_fd" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xab83e060, "__dev_change_net_namespace" },
	{ 0x1533ec67, "genl_register_family" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x98cf60b3, "strlen" },
	{ 0xead00af0, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xdc0815f1, "dev_get_by_name" },
	{ 0x9fc068b0, "device_match_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8b030df5, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x507945b0, "__put_net" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1000e556, "dev_set_mac_address" },
	{ 0xb341ba23, "device_del" },
	{ 0xeb0d3a82, "bpf_trace_run1" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0xd367601c, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x753af3ce, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1a3b52ff, "class_for_each_device" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xeea50d0c, "netlink_broadcast" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x81822a88, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0xd1ea70a4, "device_rename" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x61ac310c, "genlmsg_put" },
	{ 0xc0346142, "device_initialize" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0x31345d86, "trace_output_call" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb73864bd, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C97F2867043A67D3F3E2091");
