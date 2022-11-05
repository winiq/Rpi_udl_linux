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
	{ 0x826655e4, "param_ops_int" },
	{ 0x3627532, "vb2_fop_mmap" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0x7ad2821, "vb2_fop_poll" },
	{ 0x8cfaf8e7, "vb2_fop_read" },
	{ 0x18af532b, "vb2_ops_wait_finish" },
	{ 0xfab8fc03, "vb2_ops_wait_prepare" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0xad4121a3, "vb2_ioctl_streamoff" },
	{ 0xabfa79a3, "vb2_ioctl_streamon" },
	{ 0xc1426e05, "vb2_ioctl_prepare_buf" },
	{ 0x38ac6638, "vb2_ioctl_create_bufs" },
	{ 0xcc5164c6, "vb2_ioctl_dqbuf" },
	{ 0xc31d4976, "vb2_ioctl_expbuf" },
	{ 0x90b86462, "vb2_ioctl_qbuf" },
	{ 0xa8d83a3a, "vb2_ioctl_querybuf" },
	{ 0xb37740c, "vb2_ioctl_reqbufs" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xf4da1e11, "__v4l2_device_register_subdev_nodes" },
	{ 0x55974ebc, "v4l2_subdev_alloc_state" },
	{ 0x10453a23, "v4l2_ctrl_add_handler" },
	{ 0xa149f723, "media_create_pad_link" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x91369769, "vb2_queue_init" },
	{ 0x41330af, "vb2_dma_contig_memops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2b78d239, "media_pipeline_start" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x604cc700, "vb2_plane_cookie" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0xde88ddc2, "media_pipeline_stop" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xae8eef60, "v4l2_async_notifier_register" },
	{ 0x26f5f694, "__v4l2_async_notifier_add_subdev" },
	{ 0x9b186360, "fwnode_graph_get_remote_endpoint" },
	{ 0xa67a1b7c, "v4l2_async_notifier_init" },
	{ 0x75fb7327, "v4l2_fwnode_endpoint_parse" },
	{ 0xb96de63f, "of_graph_get_remote_port_parent" },
	{ 0xb21aa897, "of_graph_get_next_endpoint" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xf6108b66, "__media_device_register" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0x4481bf1e, "media_device_init" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x175807a4, "devm_platform_ioremap_resource" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x33700033, "v4l2_event_subscribe" },
	{ 0x689cb425, "v4l2_ctrl_subscribe_event" },
	{ 0x2bca9add, "media_entity_remote_pad" },
	{ 0x37a0cba, "kfree" },
	{ 0xb13d41a0, "v4l2_subdev_free_state" },
	{ 0x7393eb03, "media_device_cleanup" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0xa8bc73b8, "v4l2_fh_release" },
	{ 0x5f9af18a, "v4l2_fh_open" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6fd388de, "_vb2_fop_release" },
	{ 0x6782feca, "v4l2_fh_is_singular" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xe6277256, "v4l2_g_parm_cap" },
	{ 0x522c6e92, "v4l2_s_parm_cap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0xfcee867e, "v4l2_event_queue" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0xcf0af84f, "media_device_unregister" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x164192b7, "v4l2_async_notifier_unregister" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff75c005, "v4l2_subdev_call_wrappers" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,videobuf2-dma-contig,videobuf2-common,v4l2-async,v4l2-fwnode,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicamC*");

MODULE_INFO(srcversion, "8FB1E067CE6DD7FB9DE0906");
