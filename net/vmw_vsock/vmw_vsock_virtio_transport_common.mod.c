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
	{ 0x2d3385d3, "system_wq" },
	{ 0xcdeede81, "release_sock" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0xe661f468, "vsock_assign_transport" },
	{ 0x5cd047a, "vsock_create_connected" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x751efc08, "vsock_stream_has_space" },
	{ 0x13446bd3, "vsock_core_get_transport" },
	{ 0x47f8a58f, "bpf_trace_run10" },
	{ 0x74085376, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe22c8e94, "vsock_stream_has_data" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0x26509068, "sk_free" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2e77b15f, "vsock_find_bound_socket" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x3e3bfa09, "sk_error_report" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x95cd5a4a, "bpf_trace_run8" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x9cdd8e83, "vsock_deliver_tap" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x6e1262cc, "vsock_remove_sock" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x12fb96c5, "vsock_insert_connected" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0x30c6c90c, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "1EEE6DF92F445D52FF1FB8F");
