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
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xf66fb375, "iscsi_session_recovery_timedout" },
	{ 0x9e326cf2, "iscsi_tcp_cleanup_task" },
	{ 0xc3fdb5f7, "iscsi_tcp_task_xmit" },
	{ 0x46108b80, "iscsi_tcp_task_init" },
	{ 0xc4e7be29, "iscsi_conn_send_pdu" },
	{ 0xfe0a90a7, "iscsi_host_set_param" },
	{ 0x8050bb5c, "iscsi_session_get_param" },
	{ 0x209d7ca9, "iscsi_conn_start" },
	{ 0x6cdf2fdc, "iscsi_eh_cmd_timed_out" },
	{ 0x96bbfffa, "scsi_change_queue_depth" },
	{ 0xaee0d646, "iscsi_target_alloc" },
	{ 0x1b2f05fd, "iscsi_eh_recover_target" },
	{ 0x63670b62, "iscsi_eh_device_reset" },
	{ 0xb461de1f, "iscsi_eh_abort" },
	{ 0x8231888, "iscsi_queuecommand" },
	{ 0x32f1526b, "iscsi_unregister_transport" },
	{ 0xbb7c92d0, "iscsi_register_transport" },
	{ 0x5216273e, "iscsi_host_get_param" },
	{ 0x2cf77e09, "iscsi_conn_stop" },
	{ 0x481de1f2, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xc0958cf, "iscsi_tcp_conn_teardown" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9458179, "crypto_alloc_ahash" },
	{ 0x1747240d, "iscsi_tcp_conn_setup" },
	{ 0x195f1d71, "kernel_getsockname" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x26509068, "sk_free" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x8c1ad13, "kernel_getpeername" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x201f958e, "iscsi_conn_get_param" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc4b30af2, "__traceiter_iscsi_dbg_sw_tcp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd4e55f1e, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0xb57c95c7, "blk_queue_flag_set" },
	{ 0x94368263, "blk_queue_dma_alignment" },
	{ 0x92997ed8, "_printk" },
	{ 0xc2e1b83c, "iscsi_tcp_r2tpool_alloc" },
	{ 0xd2a52f9d, "iscsi_session_setup" },
	{ 0xb3d32188, "iscsi_host_add" },
	{ 0x123b25a0, "iscsi_host_get_max_scsi_cmds" },
	{ 0x8afef367, "iscsi_host_alloc" },
	{ 0x4e6eb763, "iscsi_host_free" },
	{ 0x124c32ce, "iscsi_host_remove" },
	{ 0x90c98b5f, "iscsi_session_teardown" },
	{ 0xea0ed57e, "iscsi_tcp_r2tpool_free" },
	{ 0x12d90cfd, "scsi_is_host_device" },
	{ 0xda5df87c, "iscsi_tcp_recv_skb" },
	{ 0x5872f25b, "tcp_read_sock" },
	{ 0x6601846, "iscsi_conn_queue_work" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xa5c5220d, "fput" },
	{ 0x1c73ea58, "iscsi_tcp_hdr_recv_prep" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x7257a25d, "sock_no_linger" },
	{ 0x8c97b297, "sk_set_memalloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x815178b4, "iscsi_conn_bind" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0x317fa52e, "iscsi_tcp_set_max_r2t" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0x9063cbec, "iscsi_set_param" },
	{ 0x43d47d36, "iscsi_tcp_conn_get_stats" },
	{ 0xe16ff7e8, "iscsi_conn_failure" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9db6f099, "iscsi_tcp_segment_unmap" },
	{ 0x2200632e, "kernel_sendmsg" },
	{ 0xcce27180, "iscsi_tcp_segment_done" },
	{ 0x20f162f2, "iscsi_tcp_dgst_header" },
	{ 0xc2882932, "iscsi_segment_seek_sg" },
	{ 0x8e65c781, "iscsi_segment_init_linear" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0xc7a2afc7, "iscsi_dbg_trace" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp");


MODULE_INFO(srcversion, "99AE39E4B2F97F2D27CE860");
