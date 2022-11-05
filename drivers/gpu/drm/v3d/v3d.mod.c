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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x478adb45, "drm_release" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2174f648, "drm_dev_register" },
	{ 0x34760d05, "drm_compat_ioctl" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x900a3722, "drm_gem_shmem_free" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0x1cd85750, "clk_get_rate_range" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0x23c7b80e, "drm_gem_shmem_mmap" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x251037a, "drm_sched_resubmit_jobs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6e7bf422, "platform_get_irq_optional" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8eef280, "drm_gem_shmem_get_pages_sgt" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xada624f1, "drm_gem_unlock_reservations" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x176d8cb2, "devm_ioremap_resource" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0x31786576, "__devm_reset_control_get" },
	{ 0x745a981, "xa_erase" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xb6ea109b, "drm_sched_increase_karma" },
	{ 0xf58d0894, "drm_gem_shmem_pin" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x85428465, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x1d454378, "drm_gem_shmem_print_info" },
	{ 0xa23e5f54, "__devm_drm_dev_alloc" },
	{ 0xc6e73cd4, "drm_sched_stop" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xeb0d3a82, "bpf_trace_run1" },
	{ 0x70236389, "drm_dev_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x40de2b40, "drm_gem_dma_resv_wait" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x885173a3, "drm_gem_handle_create" },
	{ 0xf8fa84e5, "drm_sched_fini" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x7e95f03f, "drm_sched_init" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeaaac757, "bpf_trace_run5" },
	{ 0xf1dfd000, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xbdc44335, "drm_debugfs_create_files" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x14692e7f, "drm_sched_entity_destroy" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xb8f82a9c, "drm_gem_shmem_vunmap" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xf61d7e9d, "drm_gem_prime_fd_to_handle" },
	{ 0x942f0ee9, "drm_dev_printk" },
	{ 0x90ce3c67, "drm_ioctl" },
	{ 0x70c46013, "drm_gem_mmap" },
	{ 0x3e50b109, "drm_gem_fence_array_add" },
	{ 0x576f21b3, "drm_gem_fence_array_add_implicit" },
	{ 0x9cb14313, "drm_syncobj_replace_fence" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x110ea0e3, "drm_sched_start" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbf0fd39e, "drm_gem_object_lookup" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x255c42d2, "drm_gem_prime_handle_to_fd" },
	{ 0xa44eb13e, "platform_get_resource_byname" },
	{ 0xc1c7d4b1, "drm_sched_job_init" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x775e5978, "drm_sched_job_cleanup" },
	{ 0x76408dac, "drm_gem_shmem_unpin" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x3f050049, "drm_gem_lock_reservations" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x6620aaef, "drm_gem_shmem_create" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xcd7668cb, "drm_gem_prime_mmap" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2b760415, "drm_syncobj_find_fence" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x3fcf8c01, "drm_sched_entity_init" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x20978fb9, "idr_find" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4f05bc37, "dma_resv_add_excl_fence" },
	{ 0x1acf3f10, "drm_syncobj_find" },
	{ 0x54065aa1, "drm_gem_shmem_get_sg_table" },
	{ 0x768ed549, "drm_gem_shmem_vmap" },
	{ 0xcf999106, "drm_poll" },
	{ 0xdb9f29e6, "drm_sched_entity_push_job" },
	{ 0xef2b6d3f, "drm_open" },
};

MODULE_INFO(depends, "drm,gpu-sched");

MODULE_ALIAS("of:N*T*Cbrcm,7268-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7268-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3dC*");

MODULE_INFO(srcversion, "D1F721CE5EED18A283A2D53");
