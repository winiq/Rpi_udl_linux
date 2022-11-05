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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x181ae485, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x21f30db6, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x66136c46, "v4l2_m2m_buf_copy_metadata" },
	{ 0x97358f5c, "v4l2_m2m_register_media_controller" },
	{ 0x815588a6, "clk_enable" },
	{ 0x18c21f47, "video_device_release_empty" },
	{ 0x60b1519a, "media_request_unpin" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x774361d0, "v4l2_m2m_ctx_init" },
	{ 0x1e35a32d, "vb2_wait_for_all_buffers" },
	{ 0x1cd85750, "clk_get_rate_range" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfab8fc03, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0xf5b3e281, "vb2_request_validate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7f4a410, "v4l2_m2m_fop_mmap" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xed7d2c22, "vb2_request_object_is_buffer" },
	{ 0xf6fb84af, "v4l2_m2m_ioctl_streamon" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x42686bcb, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xa4aa6c75, "v4l2_m2m_ioctl_streamoff" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0xb06b5917, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x595393f8, "v4l2_fh_init" },
	{ 0x689cb425, "v4l2_ctrl_subscribe_event" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x828b6d0b, "v4l2_ctrl_request_hdl_find" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xd7484103, "vb2_request_buffer_cnt" },
	{ 0x52cda3f7, "v4l2_ctrl_request_setup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7393eb03, "media_device_cleanup" },
	{ 0x604cc700, "vb2_plane_cookie" },
	{ 0x8e5a1e6f, "v4l2_m2m_get_vq" },
	{ 0x4823cf, "media_request_object_put" },
	{ 0x8a5234e2, "v4l2_m2m_ioctl_qbuf" },
	{ 0x37d7b86b, "v4l2_m2m_fop_poll" },
	{ 0x32c52784, "v4l2_ctrl_request_complete" },
	{ 0xd87c01bb, "media_request_pin" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb6469109, "v4l2_m2m_buf_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3c6c1861, "v4l2_m2m_request_queue" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0x37b87d71, "v4l2_m2m_ioctl_stateless_decoder_cmd" },
	{ 0x70ce40ad, "v4l2_m2m_ioctl_querybuf" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x49c3dcb7, "v4l2_m2m_ioctl_expbuf" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa44eb13e, "platform_get_resource_byname" },
	{ 0x8119a05e, "vb2_find_timestamp" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb64ce56c, "v4l2_ctrl_request_hdl_ctrl_find" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf6108b66, "__media_device_register" },
	{ 0x41330af, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc06d3edc, "devm_ioremap" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x3ebfcff2, "v4l2_m2m_buf_done_and_job_finish" },
	{ 0xea7c20ed, "v4l2_m2m_buf_remove" },
	{ 0xbb849944, "v4l2_m2m_ioctl_stateless_try_decoder_cmd" },
	{ 0x18af532b, "vb2_ops_wait_finish" },
	{ 0x73534824, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x84ea0f4d, "v4l2_fh_add" },
	{ 0xb985482b, "v4l2_m2m_ctx_release" },
	{ 0x59e6a6c3, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4481bf1e, "media_device_init" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x34073e60, "v4l2_m2m_next_buf" },
	{ 0xcf0af84f, "media_device_unregister" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0xb07f1848, "v4l2_m2m_job_finish" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd4fc93fc, "v4l2_fh_exit" },
	{ 0x91369769, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videodev,mc,videobuf2-common,videobuf2-v4l2,videobuf2-dma-contig");

MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vid-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vid-decoderC*");

MODULE_INFO(srcversion, "1D9163FF14A7718BCF985A4");
