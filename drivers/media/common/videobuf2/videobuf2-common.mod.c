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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x2b2e368c, "__mmap_lock_do_trace_released" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbd628752, "__tracepoint_mmap_lock_start_locking" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x860e78d8, "__mmap_lock_do_trace_start_locking" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd29ce79d, "follow_pfn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x6e238242, "dma_buf_fd" },
	{ 0x1e4c36a5, "media_request_object_bind" },
	{ 0x69234131, "dma_buf_put" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaa1fd904, "dma_buf_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xa278349c, "media_request_put" },
	{ 0xb73d8a4c, "v4l_vb2q_enable_media_source" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x5fad6ff2, "find_vma" },
	{ 0x4823cf, "media_request_object_put" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x5efdd68b, "__tracepoint_mmap_lock_released" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0xbe118c52, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xb932d2d8, "unpin_user_pages" },
	{ 0x17e1708c, "media_request_object_unbind" },
	{ 0x80fe4637, "__mmap_lock_do_trace_acquire_returned" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd1124c59, "media_request_object_init" },
	{ 0x5206f811, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "0925B1A3CF0DF3C6D840F9D");
