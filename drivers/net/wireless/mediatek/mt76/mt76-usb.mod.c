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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1401c157, "skb_to_sgvec" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x664d79a6, "usb_init_urb" },
	{ 0x1ec57b4f, "__mt76_worker_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x90d3c654, "mt76_rx_poll_complete" },
	{ 0x5dc52038, "__page_frag_cache_drain" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x16b2e76c, "mt76_queue_tx_complete" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0x330cbe09, "usb_unpoison_urb" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x4b2c3efc, "usb_poison_urb" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2653f555, "build_skb" },
	{ 0x64e8c03f, "kthread_unpark" },
	{ 0x2de125c0, "page_frag_alloc_align" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x26edaf08, "mt76_tx_status_check" },
	{ 0x2b2963ad, "sched_set_fifo_low" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x36eb1cbd, "kthread_park" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x91aa164d, "mt76_has_tx_pending" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0xb0f23765, "skb_add_rx_frag" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
};

MODULE_INFO(depends, "mt76");


MODULE_INFO(srcversion, "9B5DDA0D0A42B6FC0129A76");
