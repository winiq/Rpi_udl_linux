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
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x5dc00640, "single_open" },
	{ 0x48009c41, "debugfs_create_u8" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xae8a38f9, "firmware_request_cache" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x416e5db, "single_release" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbd19b5, "seq_read" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0xccb45252, "ieee80211_stop_queue" },
	{ 0x6fdee19a, "ieee80211_tx_status" },
	{ 0xfbd5e2cf, "debugfs_create_u32" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x983d4093, "ieee80211_rx_list" },
	{ 0x576da03d, "bpf_trace_run9" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x787f9af4, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x4b2c3efc, "usb_poison_urb" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdd860064, "simple_attr_release" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x96748047, "devm_kmemdup" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0x3cc5fd2c, "debugfs_attr_read" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x19734d49, "ieee80211_send_bar" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xc614a60b, "ieee80211_get_tx_rates" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd94eb89f, "ieee80211_wake_queue" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x7fc4b79f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0xcacce21e, "ieee80211_tx_status_ext" },
	{ 0xb0f23765, "skb_add_rx_frag" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xa6257a2f, "complete" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x76072819, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb73864bd, "bpf_trace_run4" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc0b4422b, "simple_attr_open" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6197c046, "__put_page" },
	{ 0xd815b312, "__skb_pad" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cfg80211,mac80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7DC7FDDFE7F3154D60A9472");
