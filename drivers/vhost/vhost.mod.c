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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc577832d, "vhost_iotlb_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x37b50661, "kthread_unuse_mm" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa24517eb, "vhost_iotlb_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x25c60ca8, "mmput" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xdba2bbdb, "__mmdrop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x37cf1678, "get_task_mm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69e872f9, "vhost_iotlb_itree_first" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa5c5220d, "fput" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe946549f, "kthread_use_mm" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6bec0e66, "vhost_iotlb_del_range" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x34df7d1d, "iov_iter_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x213a19cd, "eventfd_fget" },
	{ 0xa32c31ff, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x61a87f43, "cgroup_attach_task_all" },
	{ 0x38ff875f, "vhost_iotlb_add_range" },
	{ 0xa6257a2f, "complete" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6478bb5a, "unpin_user_pages_dirty_lock" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0x5206f811, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "vhost_iotlb");


MODULE_INFO(srcversion, "5BD8126E8A7AFBE4529DF65");
