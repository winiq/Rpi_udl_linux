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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2940483, "snd_dmaengine_pcm_pointer_no_residue" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0xed2e8dd8, "of_property_read_string_helper" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0xa286a234, "snd_pcm_format_name" },
	{ 0x5dc00640, "single_open" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb973e18e, "regmap_raw_write" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x81188c30, "match_string" },
	{ 0xf306da06, "regmap_exit" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xbc71f487, "device_add_groups" },
	{ 0x5bc4ba7d, "snd_dmaengine_pcm_set_config_from_dai_data" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x848f5e2a, "of_count_phandle_with_args" },
	{ 0x416e5db, "single_release" },
	{ 0x3a44f066, "snd_pcm_hw_constraint_msbits" },
	{ 0xed1d41b0, "pinctrl_select_state" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc8809858, "devm_pinctrl_get" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0xfbf76d84, "snd_hwparams_to_dma_slave_config" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xac2b94c5, "snd_compress_new" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd19b5, "seq_read" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0xe2467dc, "pinctrl_lookup_state" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0x165cfc64, "dma_request_chan" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x51d6e901, "of_graph_get_port_parent" },
	{ 0x8a639b5b, "snd_dmaengine_pcm_pointer" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7cbd54f4, "regmap_parse_val" },
	{ 0x638fbee6, "snd_dmaengine_pcm_open" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfbd5e2cf, "debugfs_create_u32" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9f64a537, "default_llseek" },
	{ 0xeb0d3a82, "bpf_trace_run1" },
	{ 0x7392091d, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2afec8b3, "snd_pcm_set_managed_buffer" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x249741aa, "regmap_async_complete" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x11387ac7, "regulator_allow_bypass" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0x2f515391, "dev_get_regmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x36262420, "snd_jack_add_new_kctl" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xdc3a8361, "snd_jack_new" },
	{ 0xdc02eb39, "dmi_available" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x55e313f, "snd_pcm_lib_ioctl" },
	{ 0x1de95874, "simple_open" },
	{ 0xa790f07a, "pinctrl_pm_select_sleep_state" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x17ac457f, "snd_dmaengine_pcm_request_channel" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x96748047, "devm_kmemdup" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x22651f0a, "snd_card_disconnect_sync" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x6587c97e, "module_put" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x432ef100, "dma_get_slave_caps" },
	{ 0xcb274080, "snd_dmaengine_pcm_close" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x215aed1, "snd_component_add" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x919f8e3d, "gpiod_unexport" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4abcd69a, "snd_pcm_stream_lock_irq" },
	{ 0x9de9e1c6, "devm_kstrdup" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x5fab9ceb, "snd_pcm_stream_unlock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0xf5e7567a, "pinctrl_pm_select_default_state" },
	{ 0x6260e804, "snd_dmaengine_pcm_get_chan" },
	{ 0x644f34a5, "snd_dmaengine_pcm_refine_runtime_hwparams" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xb22f8129, "of_get_property" },
	{ 0xbb521729, "snd_pcm_new_internal" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x390b72d1, "snd_ctl_free_one" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9d1a7886, "regulator_disable_deferred" },
	{ 0x148653, "vsnprintf" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xfe990052, "gpio_free" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x942cefb4, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x4829a47e, "memcpy" },
	{ 0x25ce6759, "gpiod_export" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0xa13a7a1e, "snd_pcm_hw_constraint_minmax" },
	{ 0x422f0fe6, "snd_dmaengine_pcm_trigger" },
	{ 0xf2e17be0, "gpiod_get_index" },
	{ 0x96848186, "scnprintf" },
	{ 0x458aab62, "devres_destroy" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0xb5aa89ca, "of_parse_phandle_with_args" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0xb4b57e4e, "regmap_raw_read" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xf3c5ee81, "snd_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x75a0d40b, "regmap_get_val_bytes" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xee45db28, "gpiod_put" },
	{ 0xab8bc1a2, "snd_pcm_rate_mask_intersect" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "snd-pcm,snd-pcm-dmaengine,snd-compress,snd");


MODULE_INFO(srcversion, "6831124D48219EB6347B308");