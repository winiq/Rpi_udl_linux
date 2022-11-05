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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x737cac7a, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xa0fd87b6, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf8d5f58c, "sock_release" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe742e84a, "sock_create_kern" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa9a70bfa, "inet6_csk_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd80a9520, "udp_sock_create6" },
	{ 0x4c7f7973, "setup_udp_tunnel_sock" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x1f003f7a, "kernel_connect" },
	{ 0xeb0d3a82, "bpf_trace_run1" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xacaca0db, "unregister_pernet_device" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa5c5220d, "fput" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x3a84a08e, "udp_set_csum" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x106c9f0d, "kernel_bind" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x6e938f72, "udp_sock_create4" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x412a95f5, "ip_queue_xmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "ipv6,ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "CBD5BF967CC5B1E986AF592");
