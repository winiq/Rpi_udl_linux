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
	{ 0xff66ff, "virtio_transport_shutdown" },
	{ 0xea2f6fa1, "virtio_transport_notify_buffer_size" },
	{ 0xe0501a8e, "virtio_transport_notify_send_post_enqueue" },
	{ 0x102b70f, "virtio_transport_notify_send_pre_enqueue" },
	{ 0xe0d05a0b, "virtio_transport_notify_send_pre_block" },
	{ 0x93594e3, "virtio_transport_notify_send_init" },
	{ 0x717fa9b9, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x9937603a, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0xc16df70f, "virtio_transport_notify_recv_pre_block" },
	{ 0x20ef41f3, "virtio_transport_notify_recv_init" },
	{ 0x86d7cf75, "virtio_transport_notify_poll_out" },
	{ 0xdb3598d7, "virtio_transport_notify_poll_in" },
	{ 0x4900e7f2, "virtio_transport_seqpacket_has_data" },
	{ 0xb3357000, "virtio_transport_seqpacket_enqueue" },
	{ 0xf3bd826b, "virtio_transport_seqpacket_dequeue" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x9272122d, "virtio_transport_stream_is_active" },
	{ 0xf193fd37, "virtio_transport_stream_rcvhiwat" },
	{ 0x7ddd1790, "virtio_transport_stream_has_space" },
	{ 0x6be7c5e1, "virtio_transport_stream_has_data" },
	{ 0x8a25ff4f, "virtio_transport_stream_enqueue" },
	{ 0x4d86c339, "virtio_transport_stream_dequeue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x5ae9bd5b, "virtio_transport_dgram_enqueue" },
	{ 0x44614efc, "virtio_transport_dgram_dequeue" },
	{ 0x19a5e72a, "virtio_transport_dgram_bind" },
	{ 0x83a0b397, "virtio_transport_connect" },
	{ 0x1fa6a508, "virtio_transport_release" },
	{ 0xea3726fb, "virtio_transport_destruct" },
	{ 0x855ecacb, "virtio_transport_do_socket_init" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7534b9f5, "vsock_core_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2264b8a0, "vsock_core_register" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x68691573, "virtio_transport_recv_pkt" },
	{ 0x932ea212, "virtio_transport_deliver_tap_pkt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x547ff97a, "virtio_transport_free_pkt" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");


MODULE_INFO(srcversion, "41A01488BD9B33EB91C6BC9");
