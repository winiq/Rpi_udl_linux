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
	{ 0x68691573, "virtio_transport_recv_pkt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xea3726fb, "virtio_transport_destruct" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xea2f6fa1, "virtio_transport_notify_buffer_size" },
	{ 0xf230ee9d, "vhost_dev_check_owner" },
	{ 0xf58917b6, "vq_meta_prefetch" },
	{ 0xe0d05a0b, "virtio_transport_notify_send_pre_block" },
	{ 0x7ddd1790, "virtio_transport_stream_has_space" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdb3598d7, "virtio_transport_notify_poll_in" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd808d949, "vhost_chr_poll" },
	{ 0x855ecacb, "virtio_transport_do_socket_init" },
	{ 0x9272122d, "virtio_transport_stream_is_active" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x894b97ee, "vhost_dev_cleanup" },
	{ 0x12a7b10f, "vhost_log_access_ok" },
	{ 0x932ea212, "virtio_transport_deliver_tap_pkt" },
	{ 0x3aef7261, "vhost_enable_notify" },
	{ 0xb995688b, "vhost_work_dev_flush" },
	{ 0x113f6c4c, "vhost_set_backend_features" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x717fa9b9, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x86d7cf75, "virtio_transport_notify_poll_out" },
	{ 0x9649e785, "vhost_poll_flush" },
	{ 0x5e7e0376, "vhost_disable_notify" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x83ab9dca, "vhost_signal" },
	{ 0x224e6665, "vhost_dev_ioctl" },
	{ 0x2264b8a0, "vsock_core_register" },
	{ 0x7534b9f5, "vsock_core_unregister" },
	{ 0x4d86c339, "virtio_transport_stream_dequeue" },
	{ 0x85b730d4, "vhost_chr_read_iter" },
	{ 0x8a25ff4f, "virtio_transport_stream_enqueue" },
	{ 0x9937603a, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x4900e7f2, "virtio_transport_seqpacket_has_data" },
	{ 0xb3357000, "virtio_transport_seqpacket_enqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xab4c3753, "vhost_get_vq_desc" },
	{ 0xf3bd826b, "virtio_transport_seqpacket_dequeue" },
	{ 0x102b70f, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x5f47d94a, "vhost_chr_write_iter" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x89769d57, "vhost_work_queue" },
	{ 0x93594e3, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x4ca55172, "vhost_poll_queue" },
	{ 0x44614efc, "virtio_transport_dgram_dequeue" },
	{ 0xe0501a8e, "virtio_transport_notify_send_post_enqueue" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x16fc22fa, "vhost_exceeds_weight" },
	{ 0xff66ff, "virtio_transport_shutdown" },
	{ 0x5ae9bd5b, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x5e7f5578, "vhost_vq_init_access" },
	{ 0xc16df70f, "virtio_transport_notify_recv_pre_block" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3e3bfa09, "sk_error_report" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x547ff97a, "virtio_transport_free_pkt" },
	{ 0x19a5e72a, "virtio_transport_dgram_bind" },
	{ 0x34df7d1d, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xf193fd37, "virtio_transport_stream_rcvhiwat" },
	{ 0x8ec9fd98, "vhost_dev_init" },
	{ 0x2a4c2a02, "vhost_dev_stop" },
	{ 0xf88b2baf, "vhost_vq_access_ok" },
	{ 0x6be7c5e1, "virtio_transport_stream_has_data" },
	{ 0x83a0b397, "virtio_transport_connect" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x383a490f, "vsock_for_each_connected_socket" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfc9be1ab, "vhost_vring_ioctl" },
	{ 0x90aa8549, "vsock_find_cid" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0xb48351f8, "_copy_to_iter" },
	{ 0x1fa6a508, "virtio_transport_release" },
	{ 0x896c2d9e, "vhost_init_device_iotlb" },
	{ 0x20ef41f3, "virtio_transport_notify_recv_init" },
	{ 0x6b20590, "vhost_add_used" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vhost,vsock");


MODULE_INFO(srcversion, "C5D52202CF287404A3D882A");
