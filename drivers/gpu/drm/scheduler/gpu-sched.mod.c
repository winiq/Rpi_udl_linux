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
	{ 0x2d3385d3, "system_wq" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xeb0d3a82, "bpf_trace_run1" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x64e8c03f, "kthread_unpark" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x3b20fb95, "dma_fence_remove_callback" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x2b2963ad, "sched_set_fifo_low" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x36eb1cbd, "kthread_park" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xa6257a2f, "complete" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "626AEDB5CD58A09FE9922BD");
