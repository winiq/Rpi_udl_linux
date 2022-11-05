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
	{ 0x7e216075, "cdev_alloc" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x29ed3f3f, "media_entity_find_link" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1b9ef33d, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0x89461ecb, "media_entity_get_fwnode_pad" },
	{ 0x210ec49c, "media_devnode_create" },
	{ 0xfbf1ec39, "media_graph_walk_start" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6d3a9989, "media_get_pad_index" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x7392091d, "device_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x18e2e423, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x729d5c40, "media_graph_walk_next" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0x1e4c36a5, "media_request_object_bind" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x154a4065, "spi_new_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa278349c, "media_request_put" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd394de53, "cdev_add" },
	{ 0x27ebbd92, "media_request_get_by_fd" },
	{ 0xcbaee58b, "media_device_register_entity" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6587c97e, "module_put" },
	{ 0x4823cf, "media_request_object_put" },
	{ 0xbcff8743, "i2c_new_scanned_device" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0xa149f723, "media_create_pad_link" },
	{ 0x6938be15, "media_create_intf_link" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0xc197395f, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x715e63c2, "media_request_object_complete" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xfb2b41b8, "fwnode_graph_get_next_endpoint" },
	{ 0x17e1708c, "media_request_object_unbind" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0xbd2c5f99, "spi_unregister_device" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0x9b186360, "fwnode_graph_get_remote_endpoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd1124c59, "media_request_object_init" },
	{ 0x1ea308b4, "media_request_object_find" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xbe0e15a5, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "2800C98182429A2F316608E");
