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
	{ 0x2844abee, "vhost_vq_avail_empty" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xf230ee9d, "vhost_dev_check_owner" },
	{ 0xf58917b6, "vq_meta_prefetch" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x22d51a2f, "vhost_poll_start" },
	{ 0xd808d949, "vhost_chr_poll" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x894b97ee, "vhost_dev_cleanup" },
	{ 0x12a7b10f, "vhost_log_access_ok" },
	{ 0x5dc52038, "__page_frag_cache_drain" },
	{ 0x8f412a8a, "copy_page_from_iter" },
	{ 0x3aef7261, "vhost_enable_notify" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x113f6c4c, "vhost_set_backend_features" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf41d904d, "vhost_dev_has_owner" },
	{ 0x9649e785, "vhost_poll_flush" },
	{ 0x5e7e0376, "vhost_disable_notify" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x224e6665, "vhost_dev_ioctl" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5ef92393, "vhost_log_write" },
	{ 0x85b730d4, "vhost_chr_read_iter" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xab4c3753, "vhost_get_vq_desc" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x5f47d94a, "vhost_chr_write_iter" },
	{ 0xb339bd88, "vhost_dev_set_owner" },
	{ 0x5444648b, "vhost_add_used_and_signal_n" },
	{ 0xfd2b3e45, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa5c5220d, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x2f0613a4, "vhost_add_used_and_signal" },
	{ 0x91923f78, "vhost_discard_vq_desc" },
	{ 0x727c853a, "tun_get_socket" },
	{ 0x4ca55172, "vhost_poll_queue" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x16fc22fa, "vhost_exceeds_weight" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x384d5f11, "tun_get_tx_ring" },
	{ 0x44268bf8, "vhost_poll_stop" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x5e7f5578, "vhost_vq_init_access" },
	{ 0xccb8c8e4, "vhost_poll_init" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x34df7d1d, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0xa090b490, "vhost_dev_reset_owner" },
	{ 0x13d758be, "vhost_has_work" },
	{ 0x8ec9fd98, "vhost_dev_init" },
	{ 0x89a9df85, "fget" },
	{ 0xa32c31ff, "iov_iter_advance" },
	{ 0xae1e03f5, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2a4c2a02, "vhost_dev_stop" },
	{ 0xf88b2baf, "vhost_vq_access_ok" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x5a855453, "tap_get_ptr_ring" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfc9be1ab, "vhost_vring_ioctl" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0x6197c046, "__put_page" },
	{ 0x896c2d9e, "vhost_init_device_iotlb" },
};

MODULE_INFO(depends, "vhost,tun,tap");


MODULE_INFO(srcversion, "18CF40C4CF7ACC6879368A0");
